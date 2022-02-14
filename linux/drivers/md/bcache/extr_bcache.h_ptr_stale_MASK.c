
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct cache_set {int dummy; } ;
struct bkey {int dummy; } ;
struct TYPE_2__ {int gen; } ;


 TYPE_1__* FUNC_0 (struct cache_set*,struct bkey const*,unsigned int) ;
 int FUNC_1 (struct bkey const*,unsigned int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static inline uint8_t FUNC_3(struct cache_set *VAR_0, const struct bkey *VAR_1,
    unsigned int VAR_2)
{
 return FUNC_2(FUNC_0(VAR_0, VAR_1, VAR_2)->gen, FUNC_1(VAR_1, VAR_2));
}
