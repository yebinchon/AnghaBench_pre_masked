
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firedtv {int dummy; } ;
struct ca_msg {int* msg; } ;


 int FUNC_0 (struct firedtv*,int*,int) ;

__attribute__((used)) static int FUNC_1(struct firedtv *VAR_0, void *VAR_1)
{
 struct ca_msg *VAR_2 = VAR_1;
 int VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_3 = 4;
 if (VAR_2->msg[3] & 0x80) {
  VAR_4 = 0;
  for (VAR_5 = 0; VAR_5 < (VAR_2->msg[3] & 0x7f); VAR_5++)
   VAR_4 = (VAR_4 << 8) + VAR_2->msg[VAR_3++];
 } else {
  VAR_4 = VAR_2->msg[3];
 }

 return FUNC_0(VAR_0, &VAR_2->msg[VAR_3], VAR_4);
}
