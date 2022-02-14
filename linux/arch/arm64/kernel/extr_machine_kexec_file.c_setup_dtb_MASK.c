
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned long u64 ;
struct kimage {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (void*,int,int ) ;
 int FUNC_1 (void*,char*) ;
 int FUNC_2 (void*,int,int ,int *,int) ;
 int FUNC_3 (void*,int,int ,char*) ;
 int FUNC_4 (void*,int,int ,unsigned long) ;
 int FUNC_5 (int *,int) ;
 unsigned long FUNC_6 () ;
 int FUNC_7 (char*,int ) ;
 scalar_t__ FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct kimage *VAR_10,
       unsigned long VAR_11, unsigned long VAR_12,
       char *VAR_13, void *VAR_14)
{
 int VAR_15, VAR_16;

 VAR_16 = FUNC_1(VAR_14, "/chosen");
 if (VAR_16 < 0)
  goto out;

 VAR_15 = VAR_16;


 if (VAR_13) {
  VAR_16 = FUNC_3(VAR_14, VAR_15, VAR_4, VAR_13);
  if (VAR_16)
   goto out;
 } else {
  VAR_16 = FUNC_0(VAR_14, VAR_15, VAR_4);
  if (VAR_16 && (VAR_16 != -VAR_3))
   goto out;
 }


 if (VAR_11) {
  VAR_16 = FUNC_4(VAR_14, VAR_15, VAR_6,
          VAR_11);
  if (VAR_16)
   goto out;

  VAR_16 = FUNC_4(VAR_14, VAR_15, VAR_5,
          VAR_11 + VAR_12);
  if (VAR_16)
   goto out;
 } else {
  VAR_16 = FUNC_0(VAR_14, VAR_15, VAR_6);
  if (VAR_16 && (VAR_16 != -VAR_3))
   goto out;

  VAR_16 = FUNC_0(VAR_14, VAR_15, VAR_5);
  if (VAR_16 && (VAR_16 != -VAR_3))
   goto out;
 }


 VAR_16 = FUNC_0(VAR_14, VAR_15, VAR_7);
 if (VAR_16 == -VAR_3)
  VAR_16 = 0;
 else if (VAR_16)
  goto out;

 if (FUNC_8()) {
  u64 VAR_17 = FUNC_6();
  VAR_16 = FUNC_4(VAR_14, VAR_15, VAR_7, VAR_17);
  if (VAR_16)
   goto out;
 } else {
  FUNC_7("RNG is not initialised: omitting \"%s\" property\n",
    VAR_7);
 }


 if (FUNC_8()) {
  u8 VAR_18[VAR_9];
  FUNC_5(VAR_18, VAR_9);
  VAR_16 = FUNC_2(VAR_14, VAR_15, VAR_8, VAR_18,
    VAR_9);
  if (VAR_16)
   goto out;
 } else {
  FUNC_7("RNG is not initialised: omitting \"%s\" property\n",
    VAR_8);
 }

out:
 if (VAR_16)
  return (VAR_16 == -VAR_2) ? -VAR_1 : -VAR_0;

 return 0;
}
