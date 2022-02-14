
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int int32_t ;
struct TYPE_2__ {scalar_t__ rxbuflen; scalar_t__ txbuflen; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_1 (char*,int *,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,scalar_t__) ;

int32_t
FUNC_4(char *VAR_3)
{
 uint32_t VAR_4;
 int32_t VAR_5;

 FUNC_0(VAR_3 != ((void*)0));

 VAR_5 = VAR_1;
 VAR_1 = 0;

 VAR_4 = FUNC_1(VAR_3, ((void*)0), 10);
 if (VAR_1 != 0) {
  FUNC_2("Error parsing buffer size");
  VAR_1 = VAR_5;
  return (-1);
 }

 if (VAR_4 > VAR_0) {
  FUNC_3("Buffer size too big - %d max allowed", VAR_0);
  VAR_1 = VAR_5;
  return (-1);
 }

 VAR_2.txbuflen = VAR_2.rxbuflen = VAR_4;
 VAR_1 = VAR_5;
 return (2);
}
