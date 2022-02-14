
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int faceflags; TYPE_2__* backarea; TYPE_2__* frontarea; struct TYPE_15__** next; } ;
typedef TYPE_1__ tmp_face_t ;
struct TYPE_16__ {scalar_t__ presencetype; scalar_t__ contents; scalar_t__ modelnum; int invalid; struct TYPE_16__* mergedarea; TYPE_1__* tmpfaces; } ;
typedef TYPE_2__ tmp_area_t ;


 int FUNC_0 (TYPE_1__*,int,TYPE_2__*) ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_7 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_8 (TYPE_1__*,TYPE_1__*,int,int) ;

int FUNC_9(tmp_face_t *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;
 tmp_area_t *VAR_7, *VAR_8, *VAR_9;
 tmp_face_t *VAR_10, *VAR_11, *VAR_12, *VAR_13;

 VAR_7 = VAR_2->frontarea;
 VAR_8 = VAR_2->backarea;


 if (VAR_7->presencetype != VAR_8->presencetype) return 0;

 if (VAR_7->contents != VAR_8->contents) return 0;

 if (VAR_7->modelnum != VAR_8->modelnum) return 0;

 VAR_5 = 0;
 VAR_6 = 0;
 for (VAR_10 = VAR_7->tmpfaces; VAR_10; VAR_10 = VAR_10->next[VAR_3])
 {
  VAR_3 = (VAR_10->frontarea != VAR_7);

  if (VAR_10->frontarea != VAR_7 &&
    VAR_10->backarea != VAR_7) FUNC_7("face does not belong to area1");



  if ((VAR_10->frontarea == VAR_7 &&
    VAR_10->backarea == VAR_8) ||
    (VAR_10->frontarea == VAR_8 &&
    VAR_10->backarea == VAR_7)) continue;

  VAR_5 |= VAR_10->faceflags;
  if (FUNC_5(VAR_10, VAR_3)) VAR_5 |= VAR_0;

  for (VAR_11 = VAR_8->tmpfaces; VAR_11; VAR_11 = VAR_11->next[VAR_4])
  {
   VAR_4 = (VAR_11->frontarea != VAR_8);

   if (VAR_11->frontarea != VAR_8 &&
     VAR_11->backarea != VAR_8) FUNC_7("face does not belong to area2");



   if ((VAR_11->frontarea == VAR_7 &&
     VAR_11->backarea == VAR_8) ||
     (VAR_11->frontarea == VAR_8 &&
     VAR_11->backarea == VAR_7)) continue;

   VAR_6 |= VAR_11->faceflags;
   if (FUNC_5(VAR_11, VAR_4)) VAR_6 |= VAR_0;

   if (FUNC_8(VAR_10, VAR_11, VAR_3, VAR_4)) return 0;
  }
 }



 if (((VAR_5 & VAR_1) && (VAR_6 & VAR_0)) ||
   ((VAR_6 & VAR_1) && (VAR_5 & VAR_0)))
 {

  return 0;
 }







 VAR_9 = FUNC_1();
 VAR_9->presencetype = VAR_7->presencetype;
 VAR_9->contents = VAR_7->contents;
 VAR_9->modelnum = VAR_7->modelnum;
 VAR_9->tmpfaces = ((void*)0);



 for (VAR_10 = VAR_7->tmpfaces; VAR_10; VAR_10 = VAR_12)
 {
  VAR_3 = (VAR_10->frontarea != VAR_7);
  VAR_12 = VAR_10->next[VAR_3];

  if ((VAR_10->frontarea == VAR_7 &&
    VAR_10->backarea == VAR_8) ||
    (VAR_10->frontarea == VAR_8 &&
    VAR_10->backarea == VAR_7))
  {
   continue;
  }

  FUNC_6(VAR_10, VAR_7);
  FUNC_0(VAR_10, VAR_3, VAR_9);
 }


 for (VAR_11 = VAR_8->tmpfaces; VAR_11; VAR_11 = VAR_13)
 {
  VAR_4 = (VAR_11->frontarea != VAR_8);
  VAR_13 = VAR_11->next[VAR_4];

  if ((VAR_11->frontarea == VAR_7 &&
    VAR_11->backarea == VAR_8) ||
    (VAR_11->frontarea == VAR_8 &&
    VAR_11->backarea == VAR_7))
  {
   continue;
  }

  FUNC_6(VAR_11, VAR_8);
  FUNC_0(VAR_11, VAR_4, VAR_9);
 }

 for (VAR_10 = VAR_7->tmpfaces; VAR_10; VAR_10 = VAR_12)
 {
  VAR_3 = (VAR_10->frontarea != VAR_7);
  VAR_12 = VAR_10->next[VAR_3];

  FUNC_6(VAR_10, VAR_10->frontarea);
  FUNC_6(VAR_10, VAR_10->backarea);
  FUNC_4(VAR_10);
 }

 VAR_7->mergedarea = VAR_9;
 VAR_7->invalid = 1;
 VAR_8->mergedarea = VAR_9;
 VAR_8->invalid = 1;

 FUNC_2(VAR_9);
 FUNC_3(VAR_9);

 return 1;
}
