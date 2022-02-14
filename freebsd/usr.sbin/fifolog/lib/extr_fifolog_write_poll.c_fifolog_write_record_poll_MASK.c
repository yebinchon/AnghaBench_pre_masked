
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
typedef int time_t ;
struct fifolog_writer {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct fifolog_writer*) ;
 scalar_t__ FUNC_2 (struct fifolog_writer*,int ) ;
 int FUNC_3 (struct fifolog_writer*,int,int ,unsigned char const*,int) ;
 int FUNC_4 (int *) ;

int
FUNC_5(struct fifolog_writer *VAR_2, uint32_t VAR_3, time_t VAR_4,
    const void *VAR_5, ssize_t VAR_6)
{
 u_int VAR_7;
 const unsigned char *VAR_8;
 int VAR_9 = 0;

 if (VAR_4 == 0)
  FUNC_4(&VAR_4);
 FUNC_1(VAR_2);

 FUNC_0(!(VAR_3 & (VAR_1|VAR_0)));
 FUNC_0(VAR_5 != ((void*)0));

 if (VAR_6 == 0) {
  if (!FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6)) {
   if (FUNC_2(VAR_2, VAR_4) < 0)
    VAR_9 = -1;

   if (!FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6))
    VAR_9 = -1;
  }
 } else {
  for (VAR_8 = VAR_5; VAR_6 > 0; VAR_6 -= VAR_7, VAR_8 += VAR_7) {
   VAR_7 = VAR_6;
   if (VAR_7 > 255)
    VAR_7 = 255;
   while (!FUNC_3(VAR_2, VAR_3, VAR_4, VAR_8, VAR_7))
    if (FUNC_2(VAR_2, VAR_4) < 0)
     VAR_9 = -1;
  }
 }
 if (FUNC_2(VAR_2, VAR_4) < 0)
  VAR_9 = -1;
 FUNC_1(VAR_2);
 return (VAR_9);
}
