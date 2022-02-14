
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orc_entry {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 struct orc_entry* FUNC_0 (unsigned int,scalar_t__,unsigned int,unsigned long) ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int VAR_7 ;
 struct orc_entry VAR_8 ;
 struct orc_entry* FUNC_2 (unsigned long) ;
 int VAR_9 ;
 int* VAR_10 ;
 struct orc_entry* FUNC_3 (unsigned long) ;
 int FUNC_4 (char*,unsigned int,int,unsigned int,...) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static struct orc_entry *FUNC_6(unsigned long VAR_11)
{
 static struct orc_entry *VAR_12;

 if (!VAR_9)
  return ((void*)0);

 if (VAR_11 == 0)
  return &VAR_8;


 if (VAR_11 >= VAR_1 && VAR_11 < VAR_2) {
  unsigned int VAR_13, VAR_14, VAR_15;

  VAR_13 = (VAR_11 - VAR_1) / VAR_0;

  if (FUNC_5((VAR_13 >= VAR_7-1))) {
   FUNC_4("WARNING: bad lookup idx: idx=%u num=%u ip=%pB\n",
     VAR_13, VAR_7, (void *)VAR_11);
   return ((void*)0);
  }

  VAR_14 = VAR_10[VAR_13];
  VAR_15 = VAR_10[VAR_13 + 1] + 1;

  if (FUNC_5((VAR_3 + VAR_14 >= VAR_5) ||
        (VAR_3 + VAR_15 > VAR_5))) {
   FUNC_4("WARNING: bad lookup value: idx=%u num=%u start=%u stop=%u ip=%pB\n",
     VAR_13, VAR_7, VAR_14, VAR_15, (void *)VAR_11);
   return ((void*)0);
  }

  return FUNC_0(VAR_4 + VAR_14,
      VAR_3 + VAR_14, VAR_15 - VAR_14, VAR_11);
 }


 if (FUNC_1(VAR_11))
  return FUNC_0(VAR_4, VAR_3,
      VAR_6 - VAR_4, VAR_11);


 VAR_12 = FUNC_3(VAR_11);
 if (VAR_12)
  return VAR_12;

 return FUNC_2(VAR_11);
}
