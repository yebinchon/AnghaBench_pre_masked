
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ber {scalar_t__ br_wptr; scalar_t__ br_wend; } ;


 int FUNC_0 (void*,scalar_t__,size_t) ;

__attribute__((used)) static void
FUNC_1(struct ber *VAR_0, void *VAR_1, size_t VAR_2)
{
 if (VAR_0->br_wptr + VAR_2 <= VAR_0->br_wend)
  FUNC_0(VAR_1, VAR_0->br_wptr, VAR_2);
 VAR_0->br_wptr += VAR_2;
}
