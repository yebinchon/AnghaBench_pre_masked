
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_line {int dummy; } ;
struct pblk {int instance_uuid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pblk_line*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pblk*,char*) ;
 int FUNC_3 (struct pblk*) ;
 int FUNC_4 (struct pblk*,char*,int ) ;
 int FUNC_5 (struct pblk*) ;
 struct pblk_line* FUNC_6 (struct pblk*) ;
 struct pblk_line* FUNC_7 (struct pblk*) ;

__attribute__((used)) static int FUNC_8(struct pblk *VAR_1, bool VAR_2)
{
 struct pblk_line *VAR_3 = ((void*)0);

 if (VAR_2) {
  FUNC_1(&VAR_1->instance_uuid);
 } else {
  VAR_3 = FUNC_7(VAR_1);
  if (FUNC_0(VAR_3)) {
   FUNC_2(VAR_1, "could not recover l2p table\n");
   return -VAR_0;
  }
 }






 FUNC_3(VAR_1);

 if (!VAR_3) {

  VAR_3 = FUNC_6(VAR_1);
  if (!VAR_3)
   return -VAR_0;
 }

 return 0;
}
