
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct basl_fio {scalar_t__ fd; int f_name; int * fp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int * FUNC_1 (scalar_t__,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct basl_fio *VAR_4, int VAR_5)
{
 int VAR_6;

 VAR_6 = 0;

 if (VAR_5) {
  FUNC_4(VAR_4->f_name, VAR_2, VAR_1);
  VAR_4->fd = FUNC_3(VAR_4->f_name, FUNC_5(VAR_0));
 } else {
  FUNC_4(VAR_4->f_name, VAR_3, VAR_1);
  VAR_4->fd = FUNC_2(VAR_4->f_name);
 }

 if (VAR_4->fd > 0) {
  VAR_4->fp = FUNC_1(VAR_4->fd, "w+");
  if (VAR_4->fp == ((void*)0)) {
   FUNC_6(VAR_4->f_name);
   FUNC_0(VAR_4->fd);
  }
 } else {
  VAR_6 = 1;
 }

 return (VAR_6);
}
