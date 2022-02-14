
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef scalar_t__ uint32_t ;
struct tegra_bpmp {int dummy; } ;
struct seqbuf {int dummy; } ;
struct dentry {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct dentry* FUNC_0 (char const*,struct dentry*) ;
 struct dentry* FUNC_1 (char const*,int ,struct dentry*,struct tegra_bpmp*,int *) ;
 int VAR_7 ;
 int FUNC_2 (struct seqbuf*) ;
 int FUNC_3 (struct seqbuf*,char const**) ;
 int FUNC_4 (struct seqbuf*,scalar_t__*) ;
 int FUNC_5 (struct seqbuf*,int) ;

__attribute__((used)) static int FUNC_6(struct tegra_bpmp *VAR_8, struct seqbuf *VAR_9,
        struct dentry *VAR_10, uint32_t VAR_11)
{
 int VAR_12;
 uint32_t VAR_13, VAR_14;
 const char *VAR_15;
 struct dentry *VAR_16;

 while (!FUNC_2(VAR_9)) {
  VAR_12 = FUNC_4(VAR_9, &VAR_13);
  if (VAR_12 < 0)
   return VAR_12;

  if (VAR_13 < VAR_11) {
   FUNC_5(VAR_9, -4);

   return 0;
  } else if (VAR_13 != VAR_11) {

   return -VAR_3;
  }

  VAR_12 = FUNC_4(VAR_9, &VAR_14);
  if (VAR_12 < 0)
   return VAR_12;
  VAR_12 = FUNC_3(VAR_9, &VAR_15);
  if (VAR_12 < 0)
   return VAR_12;

  if (VAR_14 & VAR_1) {
   VAR_16 = FUNC_0(VAR_15, VAR_10);
   if (!VAR_16)
    return -VAR_4;
   VAR_12 = FUNC_6(VAR_8, VAR_9, VAR_16, VAR_11+1);
   if (VAR_12 < 0)
    return VAR_12;
  } else {
   umode_t VAR_17;

   VAR_17 = VAR_14 & VAR_0 ? VAR_5 : 0;
   VAR_17 |= VAR_14 & VAR_2 ? VAR_6 : 0;
   VAR_16 = FUNC_1(VAR_15, VAR_17,
           VAR_10, VAR_8,
           &VAR_7);
   if (!VAR_16)
    return -VAR_4;
  }
 }

 return 0;
}
