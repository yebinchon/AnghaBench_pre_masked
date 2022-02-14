
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct bucket {scalar_t__ last_gc; scalar_t__ gen; } ;



__attribute__((used)) static inline uint8_t FUNC_0(struct bucket *VAR_0)
{
 return VAR_0->gen - VAR_0->last_gc;
}
