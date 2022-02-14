
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef scalar_t__ uintmax_t ;
struct stat {scalar_t__ st_size; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned char* VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 int FUNC_1 (int,char*,unsigned char const*) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int) ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (int,struct stat*) ;
 int FUNC_5 (int,char**,char*,int ,int *) ;
 int VAR_11 ;
 int FUNC_6 (int*,unsigned char*,unsigned char*) ;
 int FUNC_7 (int*,int ,int ,int *) ;
 unsigned char* FUNC_8 (int *,size_t,int ,int ,int,int ) ;
 int FUNC_9 (unsigned char const*,int ,int ) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int* FUNC_10 (int ,int) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;

int
FUNC_15(int VAR_14, char *VAR_15[])
{
 struct stat VAR_16;
 int VAR_17, VAR_18, VAR_19;
 wchar_t VAR_20;
 unsigned char *VAR_21, *VAR_22;
 unsigned const char *VAR_23;
 wchar_t *VAR_24;

 (void) FUNC_11(VAR_1, "");

 VAR_23 = VAR_8;
 VAR_20 = L'\0';
 while ((VAR_17 = FUNC_5(VAR_14, VAR_15, "+adft:", VAR_11, ((void*)0))) != -1)
  switch(VAR_17) {
  case 'a':

   break;
  case 'd':
   VAR_9 = 1;
   break;
  case 'f':
   VAR_10 = 1;
   break;
  case 't':
   if (FUNC_7(&VAR_20, VAR_12, VAR_4, ((void*)0)) !=
       FUNC_13(VAR_12))
    FUNC_2(2, "invalid termination character");
   break;
  case '?':
  default:
   FUNC_14();
  }
 VAR_14 -= VAR_13;
 VAR_15 += VAR_13;

 if (VAR_14 == 0)
  FUNC_14();
 if (VAR_14 == 1)
  VAR_9 = VAR_10 = 1;
 VAR_24 = FUNC_10(*VAR_15++, VAR_20);
 if (VAR_14 >= 2)
  VAR_23 = *VAR_15++;

 VAR_19 = 1;

 do {
  if ((VAR_18 = FUNC_9(VAR_23, VAR_5, 0)) < 0 || FUNC_4(VAR_18, &VAR_16))
   FUNC_1(2, "%s", VAR_23);
  if ((uintmax_t)VAR_16.st_size > (uintmax_t)VAR_7)
   FUNC_2(2, "%s: %s", VAR_23, FUNC_12(VAR_0));
  if (VAR_16.st_size == 0) {
   FUNC_0(VAR_18);
   continue;
  }
  if ((VAR_22 = FUNC_8(((void*)0), (size_t)VAR_16.st_size, VAR_6, VAR_3, VAR_18, (off_t)0)) == VAR_2)
   FUNC_1(2, "%s", VAR_23);
  VAR_21 = VAR_22 + VAR_16.st_size;
  VAR_19 *= (FUNC_6(VAR_24, VAR_22, VAR_21));
  FUNC_0(VAR_18);
 } while (VAR_14-- > 2 && (VAR_23 = *VAR_15++));

 FUNC_3(VAR_19);
}
