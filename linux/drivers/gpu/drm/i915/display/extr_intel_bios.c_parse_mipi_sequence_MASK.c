
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct TYPE_3__ {scalar_t__ panel_id; size_t** sequence; size_t* data; int seq_version; int size; } ;
struct TYPE_4__ {int panel_type; TYPE_1__ dsi; } ;
struct drm_i915_private {TYPE_2__ vbt; } ;
struct bdb_mipi_sequence {int version; } ;
struct bdb_header {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,size_t) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t* FUNC_3 (struct bdb_mipi_sequence const*,int,int *) ;
 struct bdb_mipi_sequence* FUNC_4 (struct bdb_header const*,int ) ;
 int FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (size_t*,int,int ) ;
 int FUNC_7 (size_t*,int,int ) ;
 int FUNC_8 (size_t*) ;
 size_t* FUNC_9 (size_t const*,int ,int ) ;
 int FUNC_10 (size_t**,int ,int) ;

__attribute__((used)) static void
FUNC_11(struct drm_i915_private *VAR_7,
      const struct bdb_header *VAR_8)
{
 int VAR_9 = VAR_7->vbt.panel_type;
 const struct bdb_mipi_sequence *VAR_10;
 const u8 *VAR_11;
 u32 VAR_12;
 u8 *VAR_13;
 int VAR_14 = 0;


 if (VAR_7->vbt.dsi.panel_id != VAR_2)
  return;

 VAR_10 = FUNC_4(VAR_8, VAR_0);
 if (!VAR_10) {
  FUNC_1("No MIPI Sequence found, parsing complete\n");
  return;
 }


 if (VAR_10->version >= 4) {
  FUNC_2("Unable to parse MIPI Sequence Block v%u\n",
     VAR_10->version);
  return;
 }

 FUNC_0("Found MIPI sequence block v%u\n", VAR_10->version);

 VAR_11 = FUNC_3(VAR_10, VAR_9, &VAR_12);
 if (!VAR_11)
  return;

 VAR_13 = FUNC_9(VAR_11, VAR_12, VAR_1);
 if (!VAR_13)
  return;


 for (;;) {
  u8 VAR_15 = *(VAR_13 + VAR_14);
  if (VAR_15 == VAR_3)
   break;

  if (VAR_15 >= VAR_4) {
   FUNC_2("Unknown sequence %u\n", VAR_15);
   goto err;
  }


  if (VAR_15 == VAR_6 || VAR_15 == VAR_5)
   FUNC_1("Unsupported sequence %u\n", VAR_15);

  VAR_7->vbt.dsi.sequence[VAR_15] = VAR_13 + VAR_14;

  if (VAR_10->version >= 3)
   VAR_14 = FUNC_7(VAR_13, VAR_14, VAR_12);
  else
   VAR_14 = FUNC_6(VAR_13, VAR_14, VAR_12);
  if (!VAR_14) {
   FUNC_2("Invalid sequence %u\n", VAR_15);
   goto err;
  }
 }

 VAR_7->vbt.dsi.data = VAR_13;
 VAR_7->vbt.dsi.size = VAR_12;
 VAR_7->vbt.dsi.seq_version = VAR_10->version;

 FUNC_5(VAR_7);

 FUNC_0("MIPI related VBT parsing complete\n");
 return;

err:
 FUNC_8(VAR_13);
 FUNC_10(VAR_7->vbt.dsi.sequence, 0, sizeof(VAR_7->vbt.dsi.sequence));
}
