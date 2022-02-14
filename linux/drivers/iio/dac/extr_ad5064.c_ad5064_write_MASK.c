
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad5064_state {int (* write ) (struct ad5064_state*,unsigned int,unsigned int,unsigned int) ;} ;


 int FUNC_0 (struct ad5064_state*,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct ad5064_state *VAR_0, unsigned int VAR_1,
 unsigned int VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
 VAR_3 <<= VAR_4;

 return VAR_0->write(VAR_0, VAR_1, VAR_2, VAR_3);
}
