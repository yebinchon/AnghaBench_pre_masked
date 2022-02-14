
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct etmv4_config {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;

__attribute__((used)) static u64 FUNC_1(struct etmv4_config *VAR_5)
{
 u64 VAR_6 = 0;
 if (!FUNC_0()) {

  VAR_6 = VAR_1;
  if (VAR_5->mode & VAR_3)
   VAR_6 |= VAR_2;
 } else if (VAR_5->mode & VAR_3) {
  VAR_6 = VAR_1;
 }

 if (VAR_5->mode & VAR_4)
  VAR_6 |= VAR_0;

 return VAR_6;
}
