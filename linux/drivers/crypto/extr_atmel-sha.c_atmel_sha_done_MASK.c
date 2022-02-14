
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_sha_dev {int flags; int err; int req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct atmel_sha_dev*) ;
 int FUNC_2 (struct atmel_sha_dev*) ;

__attribute__((used)) static int FUNC_3(struct atmel_sha_dev *VAR_5)
{
 int VAR_6 = 0;

 if (VAR_1 & VAR_5->flags) {
  if (VAR_4 & VAR_5->flags) {
   VAR_5->flags &= ~VAR_4;
   goto finish;
  }
 } else if (VAR_3 & VAR_5->flags) {
  if (VAR_2 & VAR_5->flags) {
   VAR_5->flags &= ~VAR_2;
   FUNC_2(VAR_5);
   if (VAR_5->err) {
    VAR_6 = VAR_5->err;
    goto finish;
   }
  }
  if (VAR_4 & VAR_5->flags) {

   VAR_5->flags &= ~(VAR_3 |
      VAR_4);
   VAR_6 = FUNC_1(VAR_5);
   if (VAR_6 != -VAR_0)
    goto finish;
  }
 }
 return VAR_6;

finish:

 FUNC_0(VAR_5->req, VAR_6);

 return VAR_6;
}
