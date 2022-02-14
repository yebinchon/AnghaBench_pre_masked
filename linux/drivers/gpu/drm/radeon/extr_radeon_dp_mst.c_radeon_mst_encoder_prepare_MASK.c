
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_encoder_mst {int dig_encoder; int port; struct radeon_encoder* primary; } ;
struct radeon_encoder_atom_dig {int dig_encoder; int port; struct radeon_encoder* primary; } ;
struct radeon_encoder {int offset; int base; struct radeon_encoder_mst* enc_priv; } ;
struct radeon_connector {int port; } ;
struct drm_encoder {int dummy; } ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_encoder*,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct drm_encoder*,int ) ;
 struct radeon_connector* FUNC_5 (struct drm_encoder*) ;
 struct radeon_encoder* FUNC_6 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_7(struct drm_encoder *VAR_1)
{
 struct radeon_connector *VAR_2;
 struct radeon_encoder *VAR_3, *VAR_4;
 struct radeon_encoder_mst *VAR_5;
 struct radeon_encoder_atom_dig *VAR_6;

 VAR_2 = FUNC_5(VAR_1);
 if (!VAR_2) {
  FUNC_0("failed to find connector %p\n", VAR_1);
  return;
 }
 VAR_3 = FUNC_6(VAR_1);

 FUNC_4(VAR_1, VAR_0);

 VAR_5 = VAR_3->enc_priv;

 VAR_4 = VAR_5->primary;

 VAR_6 = VAR_4->enc_priv;

 VAR_5->port = VAR_2->port;

 if (VAR_6->dig_encoder == -1) {
  VAR_6->dig_encoder = FUNC_2(&VAR_4->base, -1);
  VAR_4->offset = FUNC_3(VAR_6->dig_encoder);
  FUNC_1(VAR_1, VAR_6->dig_encoder);


 }
 FUNC_0("%d %d\n", VAR_6->dig_encoder, VAR_4->offset);
}
