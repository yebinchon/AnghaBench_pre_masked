
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm_output {unsigned int channel; unsigned int master; } ;
struct stm_data {int (* packet ) (struct stm_data*,unsigned int,unsigned int,int ,int ,int ,unsigned char const*) ;} ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct stm_data*,unsigned int,unsigned int,int,char const*,size_t) ;
 int FUNC_1 (struct stm_data*,unsigned int,unsigned int,int ,int ,int ,unsigned char const*) ;

__attribute__((used)) static ssize_t FUNC_2(struct stm_data *VAR_1, struct stm_output *VAR_2,
      unsigned int VAR_3, const char *VAR_4, size_t VAR_5)
{
 unsigned int VAR_6 = VAR_2->channel + VAR_3;
 unsigned int VAR_7 = VAR_2->master;
 const unsigned char VAR_8 = 0;
 ssize_t VAR_9;

 VAR_9 = FUNC_0(VAR_1, VAR_7, VAR_6, 1, VAR_4, VAR_5);
 if (VAR_9 > 0)
  VAR_1->packet(VAR_1, VAR_7, VAR_6, VAR_0, 0, 0, &VAR_8);

 return VAR_9;
}
