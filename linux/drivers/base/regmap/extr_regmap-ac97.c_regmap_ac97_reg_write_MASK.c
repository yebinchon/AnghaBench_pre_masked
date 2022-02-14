
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_ac97 {TYPE_2__* bus; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* write ) (struct snd_ac97*,unsigned int,unsigned int) ;} ;


 int FUNC_0 (struct snd_ac97*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, unsigned int VAR_1,
 unsigned int VAR_2)
{
 struct snd_ac97 *VAR_3 = VAR_0;

 VAR_3->bus->ops->write(VAR_3, VAR_1, VAR_2);

 return 0;
}
