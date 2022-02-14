
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct seq_file {int dummy; } ;
typedef int s64 ;
struct TYPE_5__ {int pal_bus_features_val; } ;
typedef TYPE_1__ pal_bus_features_u_t ;


 char** VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (struct seq_file*,char*,char const* const,char*,char*,char*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_1)
{
 const char *const *VAR_2 = VAR_0;
 pal_bus_features_u_t VAR_3, VAR_4, VAR_5;
 u64 VAR_6, VAR_7, VAR_8;
 int VAR_9;
 s64 VAR_10;

 if ((VAR_10=FUNC_0(&VAR_3, &VAR_4, &VAR_5)) != 0)
  return 0;

 VAR_6 = VAR_3.pal_bus_features_val;
 VAR_7 = VAR_4.pal_bus_features_val;
 VAR_8 = VAR_5.pal_bus_features_val;

 for(VAR_9=0; VAR_9 < 64; VAR_9++, VAR_2++, VAR_6 >>=1, VAR_7 >>=1, VAR_8 >>=1) {
  if ( ! *VAR_2 )
   continue;
  FUNC_1(VAR_1, "%-48s : %s%s %s\n", *VAR_2,
      VAR_6 & 0x1 ? "" : "NotImpl",
      VAR_6 & 0x1 ? (VAR_7 & 0x1 ? "On" : "Off"): "",
      VAR_6 & 0x1 ? (VAR_8 & 0x1 ? "Ctrl" : "NoCtrl"): "");
 }
 return 0;
}
