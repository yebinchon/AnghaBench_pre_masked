
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ff_envelope {scalar_t__ attack_level; scalar_t__ fade_level; scalar_t__ attack_length; scalar_t__ fade_length; } ;



__attribute__((used)) static int FUNC_0(struct ff_envelope *VAR_0,
        struct ff_envelope *VAR_1)
{
 return VAR_0->attack_level != VAR_1->attack_level ||
        VAR_0->fade_level != VAR_1->fade_level ||
        VAR_0->attack_length != VAR_1->attack_length ||
        VAR_0->fade_length != VAR_1->fade_length;
}
