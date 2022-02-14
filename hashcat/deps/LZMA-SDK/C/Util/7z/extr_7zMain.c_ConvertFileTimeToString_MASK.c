
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UInt64 ;
typedef int UInt32 ;
struct TYPE_3__ {int Low; scalar_t__ High; } ;
typedef TYPE_1__ CNtfsFileTime ;
typedef int Byte ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*,unsigned int,int) ;
 int FUNC_1 (char*,unsigned int) ;

__attribute__((used)) static void FUNC_2(const CNtfsFileTime *VAR_3, char *VAR_4)
{
  unsigned VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
  Byte VAR_10[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
  unsigned VAR_11;
  UInt32 VAR_12;
  UInt64 VAR_13 = VAR_3->Low | ((UInt64)VAR_3->High << 32);
  VAR_13 /= 10000000;
  VAR_9 = (unsigned)(VAR_13 % 60); VAR_13 /= 60;
  VAR_8 = (unsigned)(VAR_13 % 60); VAR_13 /= 60;
  VAR_7 = (unsigned)(VAR_13 % 24); VAR_13 /= 24;

  VAR_12 = (UInt32)VAR_13;

  VAR_5 = (unsigned)(1601 + VAR_12 / VAR_2 * 400);
  VAR_12 %= VAR_2;

  VAR_11 = VAR_12 / VAR_0; if (VAR_11 == 4) VAR_11 = 3; VAR_5 += VAR_11 * 100; VAR_12 -= VAR_11 * VAR_0;
  VAR_11 = VAR_12 / VAR_1; if (VAR_11 == 25) VAR_11 = 24; VAR_5 += VAR_11 * 4; VAR_12 -= VAR_11 * VAR_1;
  VAR_11 = VAR_12 / 365; if (VAR_11 == 4) VAR_11 = 3; VAR_5 += VAR_11; VAR_12 -= VAR_11 * 365;

  if (VAR_5 % 4 == 0 && (VAR_5 % 100 != 0 || VAR_5 % 400 == 0))
    VAR_10[1] = 29;
  for (VAR_6 = 0;; VAR_6++)
  {
    unsigned VAR_14 = VAR_10[VAR_6];
    if (VAR_12 < VAR_14)
      break;
    VAR_12 -= VAR_14;
  }
  VAR_4 = FUNC_0(VAR_4, VAR_5, 4); *VAR_4++ = '-';
  FUNC_1(VAR_4, VAR_6 + 1); VAR_4[2] = '-'; VAR_4 += 3;
  FUNC_1(VAR_4, (unsigned)VAR_12 + 1); VAR_4[2] = ' '; VAR_4 += 3;
  FUNC_1(VAR_4, VAR_7); VAR_4[2] = ':'; VAR_4 += 3;
  FUNC_1(VAR_4, VAR_8); VAR_4[2] = ':'; VAR_4 += 3;
  FUNC_1(VAR_4, VAR_9); VAR_4[2] = 0;
}
