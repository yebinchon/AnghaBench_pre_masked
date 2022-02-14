
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned int,unsigned int) ;
 unsigned int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_2, bool VAR_3, unsigned int VAR_4,
    bool VAR_5, unsigned int VAR_6)
{
 union {
  unsigned int word;
  struct {
   unsigned int distr:2, pad:2, lvl:1, pad2:27;
  };
 } VAR_7;

 VAR_7.word = FUNC_1(VAR_0, VAR_2);
 if (VAR_5)
  VAR_7.distr = VAR_6;
 if (VAR_3)
  VAR_7.lvl = VAR_4;
 FUNC_0(VAR_1, VAR_2, VAR_7.word);
}
