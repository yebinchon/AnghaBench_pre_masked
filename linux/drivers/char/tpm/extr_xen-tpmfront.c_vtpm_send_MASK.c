
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct vtpm_shared_page {size_t length; int state; } ;
struct tpm_private {int read_queue; int evtchn; struct vtpm_shared_page* shr; } ;
struct tpm_header {int ordinal; } ;
struct tpm_chip {unsigned long timeout_c; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 struct tpm_private* FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,size_t) ;
 int FUNC_4 (int ) ;
 unsigned int FUNC_5 (struct vtpm_shared_page*) ;
 unsigned long FUNC_6 (struct tpm_chip*,int ) ;
 int FUNC_7 (struct tpm_chip*) ;
 scalar_t__ FUNC_8 (struct tpm_chip*,int ,unsigned long,int *,int) ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(struct tpm_chip *VAR_5, u8 *VAR_6, size_t VAR_7)
{
 struct tpm_private *VAR_8 = FUNC_2(&VAR_5->dev);
 struct vtpm_shared_page *VAR_9 = VAR_8->shr;
 unsigned int VAR_10 = FUNC_5(VAR_9);

 u32 VAR_11;
 unsigned long VAR_12;

 if (VAR_10 > VAR_2)
  return -VAR_0;

 if (VAR_10 + VAR_7 > VAR_2)
  return -VAR_0;


 if (FUNC_8(VAR_5, VAR_4, VAR_5->timeout_c,
   &VAR_8->read_queue, 1) < 0) {
  FUNC_7(VAR_5);
  return -VAR_1;
 }

 FUNC_3(VAR_10 + (u8 *)VAR_9, VAR_6, VAR_7);
 VAR_9->length = VAR_7;
 FUNC_0();
 VAR_9->state = VAR_3;
 FUNC_9();
 FUNC_4(VAR_8->evtchn);

 VAR_11 = FUNC_1(((struct tpm_header *)VAR_6)->ordinal);
 VAR_12 = FUNC_6(VAR_5, VAR_11);

 if (FUNC_8(VAR_5, VAR_4, VAR_12,
   &VAR_8->read_queue, 1) < 0) {

  FUNC_7(VAR_5);
  return -VAR_1;
 }

 return 0;
}
