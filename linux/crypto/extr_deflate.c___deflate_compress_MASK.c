
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct z_stream_s {unsigned int avail_in; unsigned int avail_out; unsigned int total_out; int * next_out; int * next_in; } ;
struct deflate_ctx {struct z_stream_s comp_stream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct z_stream_s*,int ) ;
 int FUNC_1 (struct z_stream_s*) ;

__attribute__((used)) static int FUNC_2(const u8 *VAR_4, unsigned int VAR_5,
         u8 *VAR_6, unsigned int *VAR_7, void *VAR_8)
{
 int VAR_9 = 0;
 struct deflate_ctx *VAR_10 = VAR_8;
 struct z_stream_s *VAR_11 = &VAR_10->comp_stream;

 VAR_9 = FUNC_1(VAR_11);
 if (VAR_9 != VAR_2) {
  VAR_9 = -VAR_0;
  goto out;
 }

 VAR_11->next_in = (u8 *)VAR_4;
 VAR_11->avail_in = VAR_5;
 VAR_11->next_out = (u8 *)VAR_6;
 VAR_11->avail_out = *VAR_7;

 VAR_9 = FUNC_0(VAR_11, VAR_1);
 if (VAR_9 != VAR_3) {
  VAR_9 = -VAR_0;
  goto out;
 }
 VAR_9 = 0;
 *VAR_7 = VAR_11->total_out;
out:
 return VAR_9;
}
