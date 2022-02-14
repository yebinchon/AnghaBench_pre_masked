
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mipi_dsi_msg {int flags; int rx_buf; int rx_len; } ;
struct mipi_dsi_host {int dummy; } ;
struct exynos_dsi_transfer {int rx_done; int flags; int rx_payload; int rx_len; int packet; } ;
struct exynos_dsi {int state; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct exynos_dsi*) ;
 int FUNC_1 (struct exynos_dsi*,struct exynos_dsi_transfer*) ;
 struct exynos_dsi* FUNC_2 (struct mipi_dsi_host*) ;
 int FUNC_3 (int *,struct mipi_dsi_msg const*) ;

__attribute__((used)) static ssize_t FUNC_4(struct mipi_dsi_host *VAR_3,
      const struct mipi_dsi_msg *VAR_4)
{
 struct exynos_dsi *VAR_5 = FUNC_2(VAR_3);
 struct exynos_dsi_transfer VAR_6;
 int VAR_7;

 if (!(VAR_5->state & VAR_0))
  return -VAR_2;

 if (!(VAR_5->state & VAR_1)) {
  VAR_7 = FUNC_0(VAR_5);
  if (VAR_7)
   return VAR_7;
  VAR_5->state |= VAR_1;
 }

 VAR_7 = FUNC_3(&VAR_6.packet, VAR_4);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_6.rx_len = VAR_4->rx_len;
 VAR_6.rx_payload = VAR_4->rx_buf;
 VAR_6.flags = VAR_4->flags;

 VAR_7 = FUNC_1(VAR_5, &VAR_6);
 return (VAR_7 < 0) ? VAR_7 : VAR_6.rx_done;
}
