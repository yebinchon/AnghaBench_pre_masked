
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long SizeT ;


 int FUNC_0 (char*,...) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char* VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;

__attribute__((used)) static int FUNC_1(void *VAR_7, const unsigned char **VAR_8,
    SizeT *VAR_9)
{
 unsigned long VAR_10;

 if (VAR_5 >= VAR_4)
  return VAR_1;

 VAR_10 = VAR_4-VAR_5;
 FUNC_0("lzma_read_byte: ofs=%08X, len=%08X\n", VAR_5, VAR_10);

 *VAR_8 = VAR_3+(VAR_5 & VAR_6);
 *VAR_9 = VAR_10;
 VAR_5 += VAR_10;

 return VAR_2;
}
