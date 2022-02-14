
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct z_stream_s {unsigned int avail_in; unsigned int avail_out; unsigned int total_out; int * next_in; int * next_out; } ;
struct deflate_ctx {struct z_stream_s decomp_stream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct z_stream_s*,int ) ;
 int FUNC_1 (struct z_stream_s*) ;

__attribute__((used)) static int FUNC_2(const u8 *VAR_5, unsigned int VAR_6,
    u8 *VAR_7, unsigned int *VAR_8, void *VAR_9)
{

 int VAR_10 = 0;
 struct deflate_ctx *VAR_11 = VAR_9;
 struct z_stream_s *VAR_12 = &VAR_11->decomp_stream;

 VAR_10 = FUNC_1(VAR_12);
 if (VAR_10 != VAR_2) {
  VAR_10 = -VAR_0;
  goto out;
 }

 VAR_12->next_in = (u8 *)VAR_5;
 VAR_12->avail_in = VAR_6;
 VAR_12->next_out = (u8 *)VAR_7;
 VAR_12->avail_out = *VAR_8;

 VAR_10 = FUNC_0(VAR_12, VAR_4);





 if (VAR_10 == VAR_2 && !VAR_12->avail_in && VAR_12->avail_out) {
  u8 VAR_13 = 0;
  VAR_12->next_in = &VAR_13;
  VAR_12->avail_in = 1;
  VAR_10 = FUNC_0(VAR_12, VAR_1);
 }
 if (VAR_10 != VAR_3) {
  VAR_10 = -VAR_0;
  goto out;
 }
 VAR_10 = 0;
 *VAR_8 = VAR_12->total_out;
out:
 return VAR_10;
}
