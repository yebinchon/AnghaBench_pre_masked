
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z_stream_s {int workspace; } ;
struct deflate_ctx {struct z_stream_s comp_stream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct z_stream_s*,int) ;
 int FUNC_3 (struct z_stream_s*,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct deflate_ctx *VAR_10, int VAR_11)
{
 int VAR_12 = 0;
 struct z_stream_s *VAR_13 = &VAR_10->comp_stream;

 VAR_13->workspace = FUNC_1(FUNC_4(
        VAR_6, VAR_5));
 if (!VAR_13->workspace) {
  VAR_12 = -VAR_4;
  goto out;
 }
 if (VAR_11)
  VAR_12 = FUNC_2(VAR_13, 3);
 else
  VAR_12 = FUNC_3(VAR_13, VAR_0, VAR_8,
     -VAR_2,
     VAR_1,
     VAR_7);
 if (VAR_12 != VAR_9) {
  VAR_12 = -VAR_3;
  goto out_free;
 }
out:
 return VAR_12;
out_free:
 FUNC_0(VAR_13->workspace);
 goto out;
}
