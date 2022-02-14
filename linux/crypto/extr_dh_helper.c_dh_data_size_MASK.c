
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dh {unsigned int key_size; unsigned int p_size; unsigned int q_size; unsigned int g_size; } ;



__attribute__((used)) static inline unsigned int FUNC_0(const struct dh *VAR_0)
{
 return VAR_0->key_size + VAR_0->p_size + VAR_0->q_size + VAR_0->g_size;
}
