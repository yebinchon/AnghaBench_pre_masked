
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint16_t ;
struct uart_opal_softc {scalar_t__ protocol; int sc_mtx; int vtermid; int outseqno; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 int FUNC_0 (char*,void*,size_t) ;
 int FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int*,int*) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct uart_opal_softc *VAR_4, void *VAR_5, size_t VAR_6)
{
 uint16_t VAR_7;
 uint64_t VAR_8;
 char VAR_9[16];
 int VAR_10;
 uint64_t VAR_11 = (uint64_t)&VAR_8;
 uint64_t VAR_12 = (uint64_t)VAR_9;

 if (VAR_4->protocol == VAR_1) {
  VAR_12 = (uint64_t)VAR_5;
  VAR_8 = VAR_6;

  FUNC_3(&VAR_12, &VAR_11);
  VAR_10 = FUNC_1(VAR_0, VAR_4->vtermid, VAR_11, VAR_12);
  FUNC_4(&VAR_8);
 } else {
  FUNC_2(&VAR_4->sc_mtx);
  if (VAR_6 > 12)
   VAR_6 = 12;
  VAR_7 = VAR_4->outseqno++;
  VAR_9[0] = VAR_3;
  VAR_9[1] = 4 + VAR_6;
  VAR_9[2] = (VAR_7 >> 8) & 0xff;
  VAR_9[3] = VAR_7 & 0xff;
  FUNC_0(&VAR_9[4], VAR_5, VAR_6);
  VAR_8 = 4 + VAR_6;

  FUNC_3(&VAR_12, &VAR_11);
  VAR_10 = FUNC_1(VAR_0, VAR_4->vtermid, VAR_11, VAR_12);
  FUNC_4(&VAR_8);

  FUNC_5(&VAR_4->sc_mtx);

  VAR_8 -= 4;
 }






 return (VAR_8);
}
