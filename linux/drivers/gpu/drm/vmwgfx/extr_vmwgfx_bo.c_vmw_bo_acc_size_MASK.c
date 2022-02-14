
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_user_buffer_object {int dummy; } ;
struct vmw_private {scalar_t__ map_mode; } ;
struct vmw_buffer_object {int dummy; } ;
typedef int dma_addr_t ;


 size_t FUNC_0 (size_t) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static size_t FUNC_3(struct vmw_private *VAR_4, size_t VAR_5,
         bool VAR_6)
{
 static size_t VAR_7, VAR_8;
 size_t VAR_9 = FUNC_0(VAR_5) >> VAR_0;
 size_t VAR_10 = FUNC_1(VAR_9 * sizeof(void *));

 if (FUNC_2(VAR_7 == 0)) {
  size_t VAR_11 = FUNC_1(VAR_3);

  VAR_7 = VAR_11 +
   FUNC_1(sizeof(struct vmw_buffer_object));
  VAR_8 = VAR_11 +
    FUNC_1(sizeof(struct vmw_user_buffer_object)) +
          VAR_1;
 }

 if (VAR_4->map_mode == VAR_2)
  VAR_10 +=
   FUNC_1(VAR_9 * sizeof(dma_addr_t));

 return ((VAR_6) ? VAR_8 : VAR_7) +
  VAR_10;
}
