
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clone {int hydration_batch_size; int hydration_threshold; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,unsigned int,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct clone *VAR_0, char *VAR_1,
      unsigned int VAR_2, ssize_t *VAR_3)
{
 ssize_t VAR_4 = *VAR_3;
 unsigned int VAR_5 = 4;

 FUNC_0("%u hydration_threshold %u hydration_batch_size %u ", VAR_5,
        FUNC_1(VAR_0->hydration_threshold),
        FUNC_1(VAR_0->hydration_batch_size));

 *VAR_3 = VAR_4;
}
