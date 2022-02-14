
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct seq_file {int dummy; } ;


 char*** VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_1, u64 VAR_2, u64 VAR_3, u64 VAR_4,
        unsigned long VAR_5)
{
 const char *const *VAR_6, *const *VAR_7;
 int VAR_8;

 VAR_6 = VAR_7 = VAR_0[VAR_5];
 for(VAR_8=0; VAR_8 < 64; VAR_8++, VAR_2 >>=1, VAR_3 >>=1, VAR_4 >>=1) {

  if (!(VAR_4))
   break;
  if (!(VAR_2 & 0x1))
   continue;
  if (VAR_6)
   VAR_7 = VAR_6 + VAR_8;
  if ( VAR_7 && *VAR_7 ) {
   FUNC_0(VAR_1, "%-40s : %s %s\n", *VAR_7,
    VAR_2 & 0x1 ? (VAR_3 & 0x1 ?
           "On " : "Off"): "",
    VAR_2 & 0x1 ? (VAR_4 & 0x1 ?
      "Ctrl" : "NoCtrl"): "");
  } else {
   FUNC_0(VAR_1, "Feature set %2ld bit %2d\t\t\t"
     " : %s %s\n",
    VAR_5, VAR_8,
    VAR_2 & 0x1 ? (VAR_3 & 0x1 ?
      "On " : "Off"): "",
    VAR_2 & 0x1 ? (VAR_4 & 0x1 ?
      "Ctrl" : "NoCtrl"): "");
  }
 }
}
