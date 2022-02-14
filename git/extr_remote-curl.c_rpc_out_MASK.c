
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_state {size_t len; size_t pos; int flush_read_but_not_sent; size_t buf; scalar_t__ initial_buffer; } ;
typedef enum packet_read_status { ____Placeholder_packet_read_status } packet_read_status ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (void*,size_t,size_t) ;
 int FUNC_2 (struct rpc_state*,int ,size_t*,int*) ;

__attribute__((used)) static size_t FUNC_3(void *VAR_1, size_t VAR_2,
  size_t VAR_3, void *VAR_4)
{
 size_t VAR_5 = VAR_2 * VAR_3;
 struct rpc_state *VAR_6 = VAR_4;
 size_t VAR_7 = VAR_6->len - VAR_6->pos;
 enum packet_read_status VAR_8;

 if (!VAR_7) {
  VAR_6->initial_buffer = 0;
  VAR_6->len = 0;
  VAR_6->pos = 0;
  if (!VAR_6->flush_read_but_not_sent) {
   if (!FUNC_2(VAR_6, 0, &VAR_7, &VAR_8))
    FUNC_0("The entire rpc->buf should be larger than LARGE_PACKET_MAX");
   if (VAR_8 == VAR_0)
    VAR_6->flush_read_but_not_sent = 1;
  }





 }
 if (VAR_6->flush_read_but_not_sent) {
  if (!VAR_7) {






   VAR_6->flush_read_but_not_sent = 0;
   return 0;
  }





 }

 if (VAR_5 < VAR_7)
  VAR_7 = VAR_5;
 FUNC_1(VAR_1, VAR_6->buf + VAR_6->pos, VAR_7);
 VAR_6->pos += VAR_7;
 return VAR_7;
}
