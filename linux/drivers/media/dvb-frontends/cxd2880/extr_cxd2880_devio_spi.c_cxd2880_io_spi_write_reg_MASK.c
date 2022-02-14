
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct cxd2880_spi {int (* write ) (struct cxd2880_spi*,int*,int) ;} ;
struct cxd2880_io {struct cxd2880_spi* if_object; } ;
typedef enum cxd2880_io_tgt { ____Placeholder_cxd2880_io_tgt } cxd2880_io_tgt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int const*,int) ;
 int FUNC_1 (struct cxd2880_spi*,int*,int) ;
 int FUNC_2 (struct cxd2880_spi*,int*,int) ;

__attribute__((used)) static int FUNC_3(struct cxd2880_io *VAR_3,
        enum cxd2880_io_tgt VAR_4,
        u8 VAR_5,
        const u8 *VAR_6, u32 VAR_7)
{
 int VAR_8 = 0;
 struct cxd2880_spi *VAR_9 = ((void*)0);
 u8 VAR_10[VAR_0 + 4];
 const u8 *VAR_11 = VAR_6;

 if (!VAR_3 || !VAR_3->if_object || !VAR_6)
  return -VAR_2;

 if (VAR_7 > VAR_0)
  return -VAR_2;

 if (VAR_5 + VAR_7 > 0x100)
  return -VAR_2;

 VAR_9 = VAR_3->if_object;

 if (VAR_4 == VAR_1)
  VAR_10[0] = 0x0f;
 else
  VAR_10[0] = 0x0e;

 while (VAR_7 > 0) {
  VAR_10[1] = VAR_5;
  if (VAR_7 > 255)
   VAR_10[2] = 255;
  else
   VAR_10[2] = VAR_7;

  FUNC_0(&VAR_10[3], VAR_11, VAR_10[2]);

  if (VAR_4 == VAR_1) {
   VAR_10[3 + VAR_10[2]] = 0x00;
   VAR_8 = VAR_9->write(VAR_9, VAR_10, VAR_10[2] + 4);
  } else {
   VAR_8 = VAR_9->write(VAR_9, VAR_10, VAR_10[2] + 3);
  }
  if (VAR_8)
   return VAR_8;

  VAR_5 += VAR_10[2];
  VAR_11 += VAR_10[2];
  VAR_7 -= VAR_10[2];
 }

 return VAR_8;
}
