
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct spi_options {int ncmd; scalar_t__ lsb; scalar_t__* pcmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 void* FUNC_3 (scalar_t__*,int) ;
 scalar_t__* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_4(const char *VAR_4, struct spi_options *VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 const char *VAR_11;
 void *VAR_12;
 uint8_t *VAR_13;

 VAR_10 = 0;
 VAR_9 = VAR_0;
 VAR_5->pcmd = (uint8_t *)FUNC_2(VAR_9);

 if (!VAR_5->pcmd)
  return 1;

 VAR_13 = VAR_5->pcmd;

 VAR_8 = 0;
 VAR_11 = VAR_4;

 while (*VAR_11) {
  while (*VAR_11 && *VAR_11 <= ' ') {
   VAR_11++;
  }

  if (!*VAR_11)
   break;

  VAR_6 = FUNC_1(*(VAR_11++));
  if (VAR_6 < 0 || !*VAR_11) {
   VAR_10 = 1;
   goto the_end;
  }

  VAR_7 = FUNC_1(*(VAR_11++));
  if (VAR_7 < 0) {
   VAR_10 = 1;
   goto the_end;
  }

  VAR_6 = (VAR_6 * 16 + VAR_7) & 0xff;

  if (VAR_8 >= VAR_9) {
   VAR_9 += 8192;
   VAR_12 = FUNC_3(VAR_5->pcmd, VAR_9);

   if (!VAR_12) {
    VAR_10 = 1;
    FUNC_0(VAR_3,
     "Not enough memory to interpret command bytes, errno=%d\n",
     VAR_1);
    goto the_end;
   }

   VAR_5->pcmd = (uint8_t *)VAR_12;
   VAR_13 = VAR_5->pcmd + VAR_8;
  }

  if (VAR_5->lsb)
   *VAR_13 = VAR_2[VAR_6];
  else
   *VAR_13 = (uint8_t)VAR_6;

  VAR_13++;
  VAR_8++;
 }

 VAR_5->ncmd = VAR_8;

the_end:



 return VAR_10;
}
