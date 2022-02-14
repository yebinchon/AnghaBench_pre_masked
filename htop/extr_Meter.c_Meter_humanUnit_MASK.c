
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (char*,int,char*,unsigned int,double,char const) ;

int FUNC_1(char* VAR_0, unsigned long int VAR_1, int VAR_2) {
   const char * VAR_3 = "KMGTPEZY";
   unsigned long int VAR_4 = 1;
   unsigned int VAR_5, VAR_6 = 1, VAR_7 = 2;

   for(;;) {
      if (VAR_1 / 1024 < VAR_4)
         break;

      if (VAR_3[1] == '\0')
         break;

      VAR_4 *= 1024;
      ++VAR_3;
   }

   if (*VAR_3 == 'K')
      VAR_7 = 0;

   for (; VAR_7 > 0; VAR_7--) {
      VAR_6 *= 10;
      if (VAR_1 / VAR_4 < VAR_6)
         break;
   }

   VAR_5 = FUNC_0(VAR_0, VAR_2, "%.*f%c",
      VAR_7, (double) VAR_1 / VAR_4, *VAR_3);

   return VAR_5;
}
