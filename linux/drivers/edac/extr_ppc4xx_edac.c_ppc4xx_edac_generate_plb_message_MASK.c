
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc4xx_ecc_status {int besr; } ;
struct mem_ctl_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 char** VAR_7 ;
 int FUNC_1 (char*,size_t,char*,char*,unsigned int,char*) ;

__attribute__((used)) static int
FUNC_2(const struct mem_ctl_info *VAR_8,
     const struct ppc4xx_ecc_status *VAR_9,
     char *VAR_10,
     size_t VAR_11)
{
 unsigned int VAR_12;
 bool VAR_13;

 if ((VAR_9->besr & VAR_4) == 0)
  return 0;

 if ((VAR_9->besr & VAR_0) == VAR_1)
  return 0;

 VAR_13 = ((VAR_9->besr & VAR_2) == VAR_3);

 VAR_12 = FUNC_0(VAR_9->besr);

 return FUNC_1(VAR_10, VAR_11,
   "%s error w/ PLB master %u \"%s\"; ",
   (VAR_13 ? "Read" : "Write"),
   VAR_12,
   (((VAR_12 >= VAR_5) &&
     (VAR_12 <= VAR_6)) ?
    VAR_7[VAR_12] : "UNKNOWN"));
}
