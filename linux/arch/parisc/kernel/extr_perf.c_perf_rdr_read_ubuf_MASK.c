
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef size_t uint32_t ;
struct rdr_tbl_ent {size_t width; size_t num_words; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct rdr_tbl_ent* FUNC_0 (size_t) ;
 int FUNC_1 (size_t,size_t) ;
 int FUNC_2 (size_t,size_t) ;

__attribute__((used)) static int FUNC_3(uint32_t VAR_2, uint64_t *VAR_3)
{
 uint64_t VAR_4, VAR_5 = 0;
 uint32_t VAR_6, VAR_7, VAR_8;
 const struct rdr_tbl_ent *VAR_9;

 VAR_9 = FUNC_0(VAR_2);
 if ((VAR_6 = VAR_9->width) == 0)
  return 0;


 VAR_8 = VAR_9->num_words;
 while (VAR_8--) {
  VAR_3[VAR_8] = 0;
 }


 if ((VAR_7 = VAR_6 & 0x03f) != 0) {
  VAR_5 = 1;
  VAR_5 <<= (64 - VAR_7);
  VAR_5--;
 }


 VAR_8 = VAR_9->num_words;
 while (VAR_8--) {

  if (VAR_1 == VAR_0) {
   VAR_4 = FUNC_1(VAR_2, VAR_6);
  } else {
   VAR_4 = FUNC_2(VAR_2, VAR_6);
  }
  if (VAR_7) {
   VAR_3[VAR_8] |= (VAR_4 << (64 - VAR_7));
   if (VAR_8) {
    VAR_3[VAR_8-1] |= ((VAR_4 >> VAR_7) & VAR_5);
   }
  } else {
   VAR_3[VAR_8] = VAR_4;
  }
 }

 return 1;
}
