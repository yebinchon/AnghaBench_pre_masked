
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raid_set {int ctr_flags; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static int FUNC_1(struct raid_set *VAR_9,
          unsigned int VAR_10,
          unsigned int VAR_11)
{
 unsigned int VAR_12 = 1, VAR_13 = 1, VAR_14 = 0;
 if (VAR_10 == VAR_0 ||
     VAR_10 == VAR_2)
  VAR_12 = VAR_11;

 else if (VAR_10 == VAR_3) {
  VAR_13 = VAR_11;
  VAR_14 = VAR_6;
  if (!FUNC_0(VAR_8, &VAR_9->ctr_flags))
   VAR_14 |= VAR_7;

 } else if (VAR_10 == VAR_1) {
  VAR_13 = VAR_11;
  VAR_14 = !VAR_6;
  if (!FUNC_0(VAR_8, &VAR_9->ctr_flags))
   VAR_14 |= VAR_7;

 } else
  return -VAR_4;

 return VAR_14 | (VAR_13 << VAR_5) | VAR_12;
}
