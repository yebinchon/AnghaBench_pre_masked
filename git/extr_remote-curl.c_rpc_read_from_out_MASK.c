
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_state {int alloc; int len; char* buf; scalar_t__ write_line_lengths; int out; } ;
typedef enum packet_read_status { ____Placeholder_packet_read_status } packet_read_status ;


 size_t VAR_0 ;



 int VAR_1 ;

 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int ,int *,int *,char*,size_t,int*,int) ;
 int FUNC_4 (char*,size_t) ;

__attribute__((used)) static int FUNC_5(struct rpc_state *VAR_2, int VAR_3,
        size_t *VAR_4,
        enum packet_read_status *VAR_5) {
 size_t VAR_6;
 char *VAR_7;
 int VAR_8;

 if (VAR_2->write_line_lengths) {
  VAR_6 = VAR_2->alloc - VAR_2->len - 4;
  VAR_7 = VAR_2->buf + VAR_2->len + 4;
 } else {
  VAR_6 = VAR_2->alloc - VAR_2->len;
  VAR_7 = VAR_2->buf + VAR_2->len;
 }

 if (VAR_6 < VAR_0)
  return 0;

 *VAR_5 = FUNC_3(VAR_2->out, ((void*)0), ((void*)0), VAR_7,
   VAR_6, &VAR_8, VAR_3);
 if (*VAR_5 != 130) {
  *VAR_4 = VAR_8 + (VAR_2->write_line_lengths ? 4 : 0);
  VAR_2->len += *VAR_4;
 }

 if (VAR_2->write_line_lengths) {
  switch (*VAR_5) {
  case 130:
   if (!(VAR_3 & VAR_1))
    FUNC_1(FUNC_0("shouldn't have EOF when not gentle on EOF"));
   break;
  case 128:
   FUNC_4(VAR_7 - 4, *VAR_4);
   break;
  case 131:
   FUNC_2(VAR_7 - 4, "0001", 4);
   break;
  case 129:
   FUNC_2(VAR_7 - 4, "0000", 4);
   break;
  }
 }

 return 1;
}
