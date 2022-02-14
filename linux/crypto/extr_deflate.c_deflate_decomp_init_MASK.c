
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z_stream_s {int workspace; } ;
struct deflate_ctx {struct z_stream_s decomp_stream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct z_stream_s*) ;
 int FUNC_3 (struct z_stream_s*,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct deflate_ctx *VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 struct z_stream_s *VAR_7 = &VAR_4->decomp_stream;

 VAR_7->workspace = FUNC_1(FUNC_4());
 if (!VAR_7->workspace) {
  VAR_6 = -VAR_2;
  goto out;
 }
 if (VAR_5)
  VAR_6 = FUNC_2(VAR_7);
 else
  VAR_6 = FUNC_3(VAR_7, -VAR_0);
 if (VAR_6 != VAR_3) {
  VAR_6 = -VAR_1;
  goto out_free;
 }
out:
 return VAR_6;
out_free:
 FUNC_0(VAR_7->workspace);
 goto out;
}
