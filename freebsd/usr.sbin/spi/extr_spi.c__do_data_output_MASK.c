
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct spi_options {int ncmd; int count; scalar_t__ verbose; int lsb; int ASCII; scalar_t__ binary; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*,int,...) ;
 scalar_t__ FUNC_1 (char,int ) ;
 scalar_t__ FUNC_2 (int const*,int,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (void*,int,int ) ;

__attribute__((used)) static int
FUNC_4(void *VAR_4, struct spi_options *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 const char *VAR_9, *VAR_10;
 const uint8_t *VAR_11;

 VAR_11 = (uint8_t *)VAR_4 + VAR_5->ncmd;
 VAR_8 = VAR_5->count;
 VAR_6 = 0;

 if (VAR_8 <= 0) {
  return -1;
 }

 if (VAR_8 != 1)
  VAR_9 = "bytes";
 else
  VAR_9 = "byte";

 if (VAR_5->ncmd != 1)
  VAR_10 = "bytes";
 else
  VAR_10 = "byte";


 if (VAR_5->binary || !VAR_5->ASCII) {
  if (VAR_5->verbose > 0)
   FUNC_0(VAR_2, "Binary output of %d %s\n", VAR_8,
       VAR_9);

  VAR_6 = (int)FUNC_2(VAR_11, 1, VAR_8, VAR_3) != VAR_8;
 }
 else if (VAR_8 > 0) {
  if (VAR_5->verbose > 0)
   FUNC_0(VAR_2, "ASCII output of %d %s\n", VAR_8,
       VAR_9);


  for (VAR_7 = 0; !VAR_6 && VAR_7 < VAR_8; VAR_7++) {
   if (VAR_7) {



    VAR_6 = FUNC_1(' ', VAR_3) == VAR_0;
   }

   if (!VAR_6)
    VAR_6 = FUNC_0(VAR_3, "%02x", VAR_11[VAR_7]) < 0;
  }

  if (!VAR_6)
   VAR_6 = FUNC_1('\n', VAR_3) == VAR_0;
 }



 if (VAR_6)
  FUNC_0(VAR_2, "Error writing to stdout, errno=%d\n", VAR_1);
 else if (VAR_5->verbose > 0 && VAR_8) {
  FUNC_0(VAR_2,
      "%d command %s and %d data %s read from SPI device\n",
      VAR_5->ncmd, VAR_10, VAR_8, VAR_9);


  FUNC_3(VAR_4, VAR_8 + VAR_5->ncmd, VAR_5->lsb);
 }

 return VAR_6;
}
