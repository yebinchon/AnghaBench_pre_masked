
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firedtv {int dummy; } ;
struct ca_msg {int length; int msg; } ;


 int FUNC_0 (struct firedtv*,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct firedtv *VAR_0, void *VAR_1)
{
 struct ca_msg *VAR_2 = VAR_1;

 return FUNC_0(VAR_0, VAR_2->msg, &VAR_2->length);
}
