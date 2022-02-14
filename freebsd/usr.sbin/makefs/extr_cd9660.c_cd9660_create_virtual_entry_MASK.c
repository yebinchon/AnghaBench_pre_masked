
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int iso9660_disk ;
struct TYPE_13__ {int flags; int type; int name; } ;
typedef TYPE_2__ fsnode ;
struct TYPE_14__ {TYPE_2__* node; int cn_children; struct TYPE_14__* parent; scalar_t__ level; TYPE_1__* isoDirRecord; } ;
typedef TYPE_3__ cd9660node ;
struct TYPE_12__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_3__*,int ) ;
 int FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 () ;
 int FUNC_4 (int *,int ,int ,int) ;
 int FUNC_5 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_6 (TYPE_3__*,TYPE_3__*) ;
 int VAR_4 ;
 void* FUNC_7 (int) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static cd9660node *
FUNC_9(iso9660_disk *VAR_5, const char *VAR_6,
    cd9660node *VAR_7, int VAR_8, int VAR_9)
{
 cd9660node *VAR_10;
 fsnode * VAR_11;

 FUNC_2(VAR_7 != ((void*)0));

 VAR_10 = FUNC_3();
 if (VAR_10 == ((void*)0))
  return ((void*)0);

 VAR_11 = FUNC_7(sizeof(*VAR_11));
 VAR_11->name = FUNC_8(VAR_6);
 VAR_10->isoDirRecord = FUNC_7(sizeof(*VAR_10->isoDirRecord));

 FUNC_4(VAR_5, VAR_11->name,
     VAR_10->isoDirRecord->name, VAR_8);

 VAR_10->node = VAR_11;
 VAR_10->parent = VAR_7;

 if (VAR_9) {
  if (VAR_10->parent != ((void*)0)) {
   VAR_10->level = VAR_10->parent->level + 1;
   if (!FUNC_0(&VAR_10->parent->cn_children))
    FUNC_6(VAR_10->parent, VAR_10);
   else
    FUNC_1(&VAR_10->parent->cn_children,
        VAR_10, VAR_4);
  }
 }

 if (VAR_7->node != ((void*)0)) {
  VAR_11->type = VAR_7->node->type;
 }


 VAR_11->type &= ~(VAR_2);
 if (VAR_8)
  VAR_11->type |= VAR_3;
 else
  VAR_11->type |= VAR_1;


 VAR_11->flags &= ~(VAR_0);



 return VAR_10;
}
