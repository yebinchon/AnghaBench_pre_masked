
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ber {size_t br_rend; size_t br_rptr; int * br_rbuf; } ;
typedef int ssize_t ;


 int VAR_0 ;
 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 (size_t,void*,size_t) ;
 int VAR_1 ;

__attribute__((used)) static ssize_t
FUNC_2(struct ber *VAR_2, void *VAR_3, size_t VAR_4)
{
 size_t VAR_5;
 size_t VAR_6;

 if (VAR_2->br_rbuf == ((void*)0))
  return -1;

 VAR_5 = VAR_2->br_rend - VAR_2->br_rptr;
 VAR_6 = FUNC_0(VAR_4, VAR_5);
 if (VAR_6 == 0) {
  VAR_1 = VAR_0;
  return (-1);
 }

 FUNC_1(VAR_2->br_rptr, VAR_3, VAR_6);
 VAR_2->br_rptr += VAR_6;

 return (VAR_6);
}
