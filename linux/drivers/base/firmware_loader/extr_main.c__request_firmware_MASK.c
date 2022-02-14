
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firmware {int priv; } ;
struct device {int dummy; } ;
typedef enum fw_opt { ____Placeholder_fw_opt } fw_opt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct firmware**,char const*,struct device*,void*,size_t,int) ;
 int FUNC_1 (struct firmware*,struct device*,int) ;
 int FUNC_2 (struct device*,char*,char const*,int) ;
 int FUNC_3 (struct firmware*,char const*,struct device*,int,int) ;
 int FUNC_4 (struct firmware*) ;
 int * VAR_3 ;
 int FUNC_5 (struct device*,int ,char*,int *) ;
 int FUNC_6 (struct firmware*) ;

__attribute__((used)) static int
FUNC_7(const struct firmware **VAR_4, const char *VAR_5,
    struct device *VAR_6, void *VAR_7, size_t VAR_8,
    enum fw_opt VAR_9)
{
 struct firmware *VAR_10 = ((void*)0);
 int VAR_11;

 if (!VAR_4)
  return -VAR_0;

 if (!VAR_5 || VAR_5[0] == '\0') {
  VAR_11 = -VAR_0;
  goto out;
 }

 VAR_11 = FUNC_0(&VAR_10, VAR_5, VAR_6, VAR_7, VAR_8,
     VAR_9);
 if (VAR_11 <= 0)
  goto out;

 VAR_11 = FUNC_5(VAR_6, VAR_10->priv, "", ((void*)0));






 if (VAR_11) {
  if (!(VAR_9 & VAR_2))
   FUNC_2(VAR_6,
     "Direct firmware load for %s failed with error %d\n",
     VAR_5, VAR_11);
  VAR_11 = FUNC_3(VAR_10, VAR_5, VAR_6, VAR_9, VAR_11);
 } else
  VAR_11 = FUNC_1(VAR_10, VAR_6, VAR_9);

 out:
 if (VAR_11 < 0) {
  FUNC_4(VAR_10);
  FUNC_6(VAR_10);
  VAR_10 = ((void*)0);
 }

 *VAR_4 = VAR_10;
 return VAR_11;
}
