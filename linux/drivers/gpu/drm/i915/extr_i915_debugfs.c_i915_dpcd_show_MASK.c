
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct seq_file {struct drm_connector* private; } ;
struct intel_dp {int aux; } ;
struct drm_connector {scalar_t__ status; scalar_t__ connector_type; } ;
struct dpcd_block {int end; int offset; size_t size; scalar_t__ edp; } ;
typedef scalar_t__ ssize_t ;
typedef int buf ;
struct TYPE_2__ {int base; } ;


 int FUNC_0 (struct dpcd_block*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int *,int,int *,size_t) ;
 struct intel_dp* FUNC_3 (int *) ;
 struct dpcd_block* VAR_3 ;
 TYPE_1__* FUNC_4 (struct drm_connector*) ;
 int FUNC_5 (struct seq_file*,char*,int,int,...) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_4, void *VAR_5)
{
 struct drm_connector *VAR_6 = VAR_4->private;
 struct intel_dp *VAR_7 =
  FUNC_3(&FUNC_4(VAR_6)->base);
 u8 VAR_8[16];
 ssize_t VAR_9;
 int VAR_10;

 if (VAR_6->status != VAR_2)
  return -VAR_1;

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_3); VAR_10++) {
  const struct dpcd_block *VAR_11 = &VAR_3[VAR_10];
  size_t VAR_12 = VAR_11->end ? VAR_11->end - VAR_11->offset + 1 : (VAR_11->size ?: 1);

  if (VAR_11->edp &&
      VAR_6->connector_type != VAR_0)
   continue;


  if (FUNC_1(VAR_12 > sizeof(VAR_8)))
   continue;

  VAR_9 = FUNC_2(&VAR_7->aux, VAR_11->offset, VAR_8, VAR_12);
  if (VAR_9 < 0)
   FUNC_5(VAR_4, "%04x: ERROR %d\n", VAR_11->offset, (int)VAR_9);
  else
   FUNC_5(VAR_4, "%04x: %*ph\n", VAR_11->offset, (int)VAR_9, VAR_8);
 }

 return 0;
}
