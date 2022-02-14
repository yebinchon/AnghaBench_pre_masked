
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct tpm_header {int return_code; } ;
struct tpm_chip {int dev; } ;
typedef scalar_t__ ssize_t ;
typedef int save ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int *,size_t const) ;
 size_t FUNC_3 (int,size_t) ;
 int FUNC_4 (unsigned int) ;
 scalar_t__ FUNC_5 (struct tpm_chip*,int *,size_t) ;

ssize_t FUNC_6(struct tpm_chip *VAR_6, u8 *VAR_7, size_t VAR_8)
{
 struct tpm_header *VAR_9 = (struct tpm_header *)VAR_7;

 u8 VAR_10[VAR_5 + 3*sizeof(u32)];
 unsigned int VAR_11 = VAR_2;
 u32 VAR_12 = 0;
 ssize_t VAR_13;
 const size_t VAR_14 = FUNC_3(sizeof(VAR_10), VAR_8);

 u32 VAR_15 = FUNC_0(VAR_9->return_code);






 FUNC_2(VAR_10, VAR_7, VAR_14);

 for (;;) {
  VAR_13 = FUNC_5(VAR_6, VAR_7, VAR_8);
  if (VAR_13 < 0)
   break;
  VAR_12 = FUNC_0(VAR_9->return_code);
  if (VAR_12 != VAR_3 && VAR_12 != VAR_4)
   break;




  if (VAR_12 == VAR_4 && VAR_15 == VAR_0)
   break;

  if (VAR_11 > VAR_1) {
   if (VAR_12 == VAR_3)
    FUNC_1(&VAR_6->dev, "in retry loop\n");
   else
    FUNC_1(&VAR_6->dev,
     "self test is still running\n");
   break;
  }
  FUNC_4(VAR_11);
  VAR_11 *= 2;
  FUNC_2(VAR_7, VAR_10, VAR_14);
 }
 return VAR_13;
}
