
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad5758_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned long VAR_2 ;
 unsigned int FUNC_1 (int) ;
 unsigned long VAR_3 ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct ad5758_state*,int ,unsigned long,unsigned int) ;
 int FUNC_4 (struct ad5758_state*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct ad5758_state *VAR_6,
    unsigned int VAR_7,
    unsigned int VAR_8)
{
 unsigned int VAR_9;
 unsigned long int VAR_10;
 int VAR_11;

 VAR_10 = VAR_3 |
        VAR_2 |
        VAR_4;
 VAR_9 = FUNC_1(1) |
        FUNC_2(VAR_8) |
        FUNC_0(VAR_7);

 VAR_11 = FUNC_3(VAR_6, VAR_1, VAR_10, VAR_9);
 if (VAR_11 < 0)
  return VAR_11;


 return FUNC_4(VAR_6, VAR_5,
          VAR_0);
}
