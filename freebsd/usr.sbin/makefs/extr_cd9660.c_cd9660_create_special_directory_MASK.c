
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ u_char ;
typedef int iso9660_disk ;
struct TYPE_12__ {scalar_t__ type; int cn_children; struct TYPE_12__* dot_dot_record; struct TYPE_12__* dot_record; TYPE_1__* isoDirRecord; struct TYPE_12__* parent; } ;
typedef TYPE_2__ cd9660node ;
struct TYPE_11__ {int* length; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_2 (int *,TYPE_2__*,int ) ;
 int FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (int *,char*,TYPE_2__*,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static cd9660node *
FUNC_5(iso9660_disk *VAR_3, u_char VAR_4,
    cd9660node *VAR_5)
{
 cd9660node *VAR_6, *VAR_7;
 char VAR_8[2];

 FUNC_3(VAR_5 != ((void*)0));

 if (VAR_4 == VAR_0)
  VAR_8[0] = 0;
 else if (VAR_4 == VAR_1)
  VAR_8[0] = 1;
 else
  return 0;

 VAR_8[1] = 0;
 if ((VAR_6 = FUNC_4(VAR_3, VAR_8, VAR_5,
     0, 0)) == ((void*)0))
  return ((void*)0);

 VAR_6->parent = VAR_5;
 VAR_6->type = VAR_4;
 VAR_6->isoDirRecord->length[0] = 34;

 if (VAR_4 == VAR_0) {
  VAR_5->dot_record = VAR_6;
  FUNC_2(&VAR_5->cn_children, VAR_6, VAR_2);

 } else if (VAR_4 == VAR_1) {
  VAR_5->dot_dot_record = VAR_6;




  if ((VAR_7 = FUNC_0(&VAR_5->cn_children)) == ((void*)0) ||
      (VAR_7->type & VAR_0) == 0) {
   FUNC_2(&VAR_5->cn_children, VAR_6,
       VAR_2);
  } else {
   FUNC_1(&VAR_5->cn_children, VAR_7, VAR_6,
       VAR_2);
  }
 }

 return VAR_6;
}
