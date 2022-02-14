
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct img_hash_dev {int err; int flags; int req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct img_hash_dev*,int *) ;
 int FUNC_2 (struct img_hash_dev*) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_6)
{
 struct img_hash_dev *VAR_7 = (struct img_hash_dev *)VAR_6;
 int VAR_8 = 0;

 if (VAR_7->err == -VAR_5) {
  VAR_8 = VAR_7->err;
  goto finish;
 }

 if (!(VAR_0 & VAR_7->flags)) {
  FUNC_1(VAR_7, ((void*)0));
  return;
 }

 if (VAR_1 & VAR_7->flags) {
  if (VAR_4 & VAR_7->flags) {
   VAR_7->flags &= ~VAR_4;
   goto finish;
  }
 } else if (VAR_3 & VAR_7->flags) {
  if (VAR_2 & VAR_7->flags) {
   VAR_7->flags &= ~VAR_2;
   FUNC_2(VAR_7);
   if (VAR_7->err) {
    VAR_8 = VAR_7->err;
    goto finish;
   }
  }
  if (VAR_4 & VAR_7->flags) {
   VAR_7->flags &= ~(VAR_3 |
     VAR_4);
   goto finish;
  }
 }
 return;

finish:
 FUNC_0(VAR_7->req, VAR_8);
}
