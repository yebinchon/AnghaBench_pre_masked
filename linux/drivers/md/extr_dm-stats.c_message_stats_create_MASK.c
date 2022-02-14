
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int dummy; } ;
struct dm_arg_set {unsigned int argc; char** argv; } ;
typedef unsigned long long sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct dm_arg_set*,int) ;
 unsigned long long FUNC_1 (struct mapped_device*) ;
 int FUNC_2 (struct mapped_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (char*,unsigned int) ;
 char* FUNC_4 (struct dm_arg_set*) ;
 int FUNC_5 (int ,unsigned long long,unsigned long long,unsigned long long,unsigned int,unsigned int,unsigned long long*,char const*,char const*,int ,int ,struct mapped_device*) ;
 scalar_t__ FUNC_6 (unsigned long long,unsigned int) ;
 int FUNC_7 (unsigned long long*) ;
 int FUNC_8 (char const*,unsigned int*,unsigned long long**) ;
 int FUNC_9 (char*,unsigned int,char*,int) ;
 int FUNC_10 (char const*,char*,...) ;
 int FUNC_11 (char const*,char*) ;
 int FUNC_12 (char const*,char*) ;
 int FUNC_13 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_14(struct mapped_device *VAR_5,
    unsigned VAR_6, char **VAR_7,
    char *VAR_8, unsigned VAR_9)
{
 int VAR_10;
 int VAR_11;
 char VAR_12;
 unsigned long long VAR_13, VAR_14, VAR_15, VAR_16;
 unsigned VAR_17;
 const char *VAR_18, *VAR_19;
 unsigned VAR_20 = 0;

 unsigned VAR_21 = 0;
 unsigned long long *VAR_22 = ((void*)0);

 struct dm_arg_set VAR_23, VAR_24;
 const char *VAR_25;
 unsigned VAR_26;






 if (VAR_6 < 3)
  goto ret_einval;

 VAR_23.argc = VAR_6;
 VAR_23.argv = VAR_7;
 FUNC_0(&VAR_23, 1);

 VAR_25 = FUNC_4(&VAR_23);
 if (!FUNC_12(VAR_25, "-")) {
  VAR_13 = 0;
  VAR_15 = FUNC_1(VAR_5);
  if (!VAR_15)
   VAR_15 = 1;
 } else if (FUNC_10(VAR_25, "%llu+%llu%c", &VAR_13, &VAR_15, &VAR_12) != 2 ||
     VAR_13 != (sector_t)VAR_13 || VAR_15 != (sector_t)VAR_15)
  goto ret_einval;

 VAR_14 = VAR_13 + VAR_15;
 if (VAR_13 >= VAR_14)
  goto ret_einval;

 VAR_25 = FUNC_4(&VAR_23);
 if (FUNC_10(VAR_25, "/%u%c", &VAR_17, &VAR_12) == 1) {
  if (!VAR_17)
   return -VAR_0;
  VAR_16 = VAR_14 - VAR_13;
  if (FUNC_6(VAR_16, VAR_17))
   VAR_16++;
  if (!VAR_16)
   VAR_16 = 1;
 } else if (FUNC_10(VAR_25, "%llu%c", &VAR_16, &VAR_12) != 1 ||
     VAR_16 != (sector_t)VAR_16 || !VAR_16)
  goto ret_einval;

 VAR_24 = VAR_23;
 VAR_25 = FUNC_4(&VAR_23);
 if (VAR_25 && FUNC_10(VAR_25, "%u%c", &VAR_26, &VAR_12) == 1) {
  while (VAR_26--) {
   VAR_25 = FUNC_4(&VAR_23);
   if (!VAR_25)
    goto ret_einval;
   if (!FUNC_11(VAR_25, "precise_timestamps"))
    VAR_20 |= VAR_2;
   else if (!FUNC_13(VAR_25, "histogram:", 10)) {
    if (VAR_21)
     goto ret_einval;
    if ((VAR_10 = FUNC_8(VAR_25 + 10, &VAR_21, &VAR_22)))
     goto ret;
   } else
    goto ret_einval;
  }
 } else {
  VAR_23 = VAR_24;
 }

 VAR_18 = "-";
 VAR_19 = "-";

 VAR_25 = FUNC_4(&VAR_23);
 if (VAR_25)
  VAR_18 = VAR_25;

 VAR_25 = FUNC_4(&VAR_23);
 if (VAR_25)
  VAR_19 = VAR_25;

 if (VAR_23.argc)
  goto ret_einval;







 FUNC_9(VAR_8, VAR_9, "%d", VAR_1);
 if (FUNC_3(VAR_8, VAR_9)) {
  VAR_10 = 1;
  goto ret;
 }

 VAR_11 = FUNC_5(FUNC_2(VAR_5), VAR_13, VAR_14, VAR_16, VAR_20,
        VAR_21, VAR_22, VAR_18, VAR_19,
        VAR_4, VAR_3, VAR_5);
 if (VAR_11 < 0) {
  VAR_10 = VAR_11;
  goto ret;
 }

 FUNC_9(VAR_8, VAR_9, "%d", VAR_11);

 VAR_10 = 1;
 goto ret;

ret_einval:
 VAR_10 = -VAR_0;
ret:
 FUNC_7(VAR_22);
 return VAR_10;
}
